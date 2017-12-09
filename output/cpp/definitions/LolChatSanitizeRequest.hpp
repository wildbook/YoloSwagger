#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSanitizeRequest_t {
    std::optional<uint32_t> level;
    std::optional<bool> aggressiveScan;
    std::vector<std::string> texts;
    std::optional<bool> removeDisallowedChars;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeRequest_t& v) {
    if(v.level)
      j["level"] = *v.level;
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    j["texts"] = v.texts;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeRequest_t& v) {
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<uint32_t>();
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<bool>();
    v.texts = j.at("texts").get<std::vector<std::string>>();
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<bool>();
  }
  inline std::string to_string(const LolChatSanitizeRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
