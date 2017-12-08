#pragma once
#incldue "../client.hpp"
#include "RecofrienderNetworkConfig.hpp"
namespace leagueapi {
  RecofrienderNetworkConfig_t GetRecofrienderV1ConfigByNetwork (const ClientInfo& info,
    const std::string& network)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/recofriender/v1/config/"+UrlCode::encode(to_string(network))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
