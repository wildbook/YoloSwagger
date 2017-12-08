#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizeResponse_t {
    std::optional<std::vector<std::string>> texts;
    bool_t modified;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeResponse_t& v) {
    if(v.texts)
      j["texts"] = *v.texts;
    j["modified"] = v.modified;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeResponse_t& v) {
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::vector<std::string>>();
    v.modified = j.at("modified").get<bool_t>();
  }
  inline std::string to_string(const LolChatSanitizeResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
