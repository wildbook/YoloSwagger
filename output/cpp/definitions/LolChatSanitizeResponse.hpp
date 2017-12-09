#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizeResponse_t {
    bool modified;
    std::optional<std::vector<std::string>> texts;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeResponse_t& v) {
    j["modified"] = v.modified;
    if(v.texts)
      j["texts"] = *v.texts;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeResponse_t& v) {
    v.modified = j.at("modified").get<bool>();
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolChatSanitizeResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
