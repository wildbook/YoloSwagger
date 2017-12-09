#pragma once
#include "../client.hpp"
#include ".hpp"
#include "PatcherInjectedPatcherError.hpp"
namespace leagueapi {
  void PostPatcherV1ProductsByProductIdInjectError (const ClientInfo& info,
    const std::string& product-id,
    const std::string& component-id,
    const PatcherInjectedPatcherError_t& error)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/inject-error";
    Headers query;
      query["component-id"] = component-id;
      query["error"] = error;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
