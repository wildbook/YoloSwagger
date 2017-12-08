#pragma once
#incldue "../client.hpp"
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  LolGeoinfoGeoInfo_t GetLolGeoinfoV1Getlocation (const ClientInfo& info,
    const std::string_t& ip_address)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-geoinfo/v1/getlocation?ip_address=" + UrlCode::encode(to_string(ip_address));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
