#pragma once
#include "../client.hpp"
#include "RecofrienderNetworkConfig.hpp"
namespace leagueapi {
  RecofrienderNetworkConfig_t GetRecofrienderV1ConfigByNetwork (const ClientInfo& info,
    const std::string& network)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/config/"+UrlCode::encode(to_string(network))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
