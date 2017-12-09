#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerContainsSanitizedRequest_t {
    std::optional<uint32_t> level;
    std::string text;
    std::optional<bool> aggressiveScan;
    std::optional<bool> includeEmbedded;
    std::optional<bool> removeDisallowedChars;
  };

  inline void to_json(nlohmann::json& j, const SanitizerContainsSanitizedRequest_t& v) {
    if(v.level)
      j["level"] = *v.level;
    j["text"] = v.text;
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    if(v.includeEmbedded)
      j["includeEmbedded"] = *v.includeEmbedded;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
  }

  inline void from_json(const nlohmann::json& j, SanitizerContainsSanitizedRequest_t& v) {
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<uint32_t>();
    v.text = j.at("text").get<std::string>();
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<bool>();
    if(auto it = j.find("includeEmbedded"); it != j.end() && !it->is_null())
      v.includeEmbedded = it->get<bool>();
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<bool>();
  }
  inline std::string to_string(const SanitizerContainsSanitizedRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
