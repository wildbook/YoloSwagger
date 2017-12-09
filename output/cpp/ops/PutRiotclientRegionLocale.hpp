#pragma once
#include "../client.hpp"
#include ".hpp"
#include "RegionLocale.hpp"
namespace leagueapi {
  //Update the region and locale.
  void PutRiotclientRegionLocale (const ClientInfo& info,
    //Region and locale resource.
    const RegionLocale_t& data)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    std::string path = "/riotclient/region-locale";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
