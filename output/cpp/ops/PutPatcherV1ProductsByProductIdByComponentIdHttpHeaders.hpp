#pragma once
#include "../client.hpp"
#include "PatcherHeaderEntry.hpp"
namespace leagueapi {
  nlohmann::json PutPatcherV1ProductsByProductIdByComponentIdHttpHeaders (const ClientInfo& info,
    const std::string& product-id,
    const std::string& component-id,
    const std::vector<PatcherHeaderEntry_t>& headers)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(headers).dump();
    std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/"+UrlCode::encode(to_string(component-id))+"/http-headers";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
