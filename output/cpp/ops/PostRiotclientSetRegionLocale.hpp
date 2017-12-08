#pragma once
#incldue "../client.hpp"
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
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/riotclient/set_region_locale?region=" + UrlCode::encode(to_string(region))    +
    "&locale=" + UrlCode::encode(to_string(locale));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
