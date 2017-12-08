#pragma once
#incldue "../client.hpp"
#include "RemotingHelpFormat.hpp"
namespace leagueapi {
  //Returns information on available functions and types
  nlohmann::json_t Help (const ClientInfo& info,
    //Name of the function or type to describe
    const std::optional<std::string_t>& target = std::nullopt,
    //Format for returned information
    const std::optional<RemotingHelpFormat_t>& format = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/Help";
    bool first = true;
    if(target) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("target="+UrlCode::encode(to_string(*target)));
    }
    if(format) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("format="+UrlCode::encode(to_string(*format)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
