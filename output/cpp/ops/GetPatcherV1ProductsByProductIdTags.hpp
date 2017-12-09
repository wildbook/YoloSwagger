#pragma once
#include "../client.hpp"
namespace leagueapi {
  std::map<std::string, std::string> GetPatcherV1ProductsByProductIdTags (const ClientInfo& info,
    const std::string& product-id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/tags";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
