#pragma once
#include "../client.hpp"
#include "Highlight.hpp"
namespace leagueapi {
  Highlight_t PutLolHighlightsV1HighlightsById (const ClientInfo& info,
    const uint64_t& id,
    const Highlight_t& highlight)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(highlight).dump();
    std::string path = "/lol-highlights/v1/highlights/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
