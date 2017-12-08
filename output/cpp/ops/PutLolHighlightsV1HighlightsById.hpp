#pragma once
#incldue "../client.hpp"
#include "Highlight.hpp"
namespace leagueapi {
  Highlight_t PutLolHighlightsV1HighlightsById (const ClientInfo& info,
    const uint64_t_t& id,
    const Highlight_t& highlight)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(highlight).dump();
    const std::string path = "/lol-highlights/v1/highlights/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
