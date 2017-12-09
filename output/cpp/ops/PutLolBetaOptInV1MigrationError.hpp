#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolBetaOptInV1MigrationError (const ClientInfo& info,
    const std::string& errString)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-beta-opt-in/v1/migration-error";
    Headers query;
      query["errString"] = errString;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
