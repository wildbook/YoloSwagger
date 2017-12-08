#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Restarts the application in order to perform a full repair (including self repair).
  void PostProcessControlV1ProcessRestartToRepair (const ClientInfo& info,
    const std::string& productId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/process-control/v1/process/restart-to-repair?productId=" + UrlCode::encode(to_string(productId));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
