#pragma once
#include "../client.hpp"
#include "LolGeoinfoGeoInfo.hpp"
namespace leagueapi {
  LolGeoinfoGeoInfo_t GetLolGeoinfoV1Getlocation (const ClientInfo& info,
    const std::string& ip_address)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-geoinfo/v1/getlocation";
    Headers query;
      query["ip_address"] = ip_address;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
