#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolLoginV1ShutdownLocksByLockName (const ClientInfo& info,
    const std::string& lockName)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/shutdown-locks/"+UrlCode::encode(to_string(lockName))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
