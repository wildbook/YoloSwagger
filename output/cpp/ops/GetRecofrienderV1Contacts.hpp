#pragma once
#incldue "../client.hpp"
#include "RecofrienderContactResource.hpp"
namespace leagueapi {
  std::vector<RecofrienderContactResource_t> GetRecofrienderV1Contacts (const ClientInfo& info,
    const std::optional<uint64_t_t>& accountId = std::nullopt,
    const std::optional<std::string_t>& source = std::nullopt,
    const std::optional<std::string_t>& friendState = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/contacts";
    bool first = true;
    if(accountId) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("accountId="+UrlCode::encode(to_string(*accountId)));
    }
    if(source) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("source="+UrlCode::encode(to_string(*source)));
    }
    if(friendState) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("friendState="+UrlCode::encode(to_string(*friendState)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
