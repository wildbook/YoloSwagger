#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerContainsSanitizedRequest_t {
    std::optional<bool> aggressiveScan;
    std::optional<bool> removeDisallowedChars;
    std::optional<bool> includeEmbedded;
    std::optional<uint32_t> level;
    std::string text;
  };

  inline void to_json(nlohmann::json& j, const SanitizerContainsSanitizedRequest_t& v) {
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
    if(v.includeEmbedded)
      j["includeEmbedded"] = *v.includeEmbedded;
    if(v.level)
      j["level"] = *v.level;
    j["text"] = v.text;
  }

  inline void from_json(const nlohmann::json& j, SanitizerContainsSanitizedRequest_t& v) {
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<bool>();
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<bool>();
    if(auto it = j.find("includeEmbedded"); it != j.end() && !it->is_null())
      v.includeEmbedded = it->get<bool>();
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<uint32_t>();
    v.text = j.at("text").get<std::string>();
  }
  inline std::string to_string(const SanitizerContainsSanitizedRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
