#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Ux acknowledges the update to the region and locale.
  void PutRiotclientRegionLocaleAck (const ClientInfo& info,
    //The region and locale change requestId that is being acknowledged.
    const uint32_t& requestId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(requestId).dump();
    const std::string path = "/riotclient/region-locale/ack";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
