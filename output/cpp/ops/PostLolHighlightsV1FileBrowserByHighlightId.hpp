#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolHighlightsV1FileBrowserByHighlightId (const ClientInfo& info,
    const uint64_t_t& highlightId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-highlights/v1/file-browser/"+UrlCode::encode(to_string(highlightId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
