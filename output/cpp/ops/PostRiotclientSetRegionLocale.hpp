#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Update the region and locale.
  void PostRiotclientSetRegionLocale (const ClientInfo& info,
    //Name of the region.
    const std::string& region,
    //Name of the locale.
    const std::string& locale)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/set_region_locale";
    Headers query;
      query["region"] = region;
      query["locale"] = locale;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
