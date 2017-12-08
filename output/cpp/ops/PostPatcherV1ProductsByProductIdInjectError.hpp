#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "PatcherInjectedPatcherError.hpp"
namespace leagueapi {
  void PostPatcherV1ProductsByProductIdInjectError (const ClientInfo& info,
    const std::string_t& product-id,
    const std::string_t& component-id,
    const PatcherInjectedPatcherError_t& error)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/inject-error?component-id=" + UrlCode::encode(to_string(component-id))    +
    "&error=" + UrlCode::encode(to_string(error));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
