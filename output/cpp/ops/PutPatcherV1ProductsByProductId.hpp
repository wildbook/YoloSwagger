#pragma once
#incldue "../client.hpp"
#include "PatcherProductResource.hpp"
namespace leagueapi {
  nlohmann::json PutPatcherV1ProductsByProductId (const ClientInfo& info,
    const std::string& product-id,
    const PatcherProductResource_t& data)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    const std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
