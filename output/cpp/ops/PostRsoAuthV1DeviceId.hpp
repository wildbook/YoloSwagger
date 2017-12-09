#pragma once
#include "../client.hpp"
#include "RsoAuthDeviceId.hpp"
namespace leagueapi {
  RsoAuthDeviceId_t PostRsoAuthV1DeviceId (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/rso-auth/v1/device-id";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
