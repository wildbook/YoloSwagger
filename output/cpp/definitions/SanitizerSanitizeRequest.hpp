#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizeRequest_t {
    std::optional<std::string_t> text;
    std::optional<std::vector<std::string>> texts;
    std::optional<bool_t> aggressiveScan;
    std::optional<bool_t> removeDisallowedChars;
    std::optional<uint32_t_t> level;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeRequest_t& v) {
    if(v.text)
      j["text"] = *v.text;
    if(v.texts)
      j["texts"] = *v.texts;
    if(v.aggressiveScan)
      j["aggressiveScan"] = *v.aggressiveScan;
    if(v.removeDisallowedChars)
      j["removeDisallowedChars"] = *v.removeDisallowedChars;
    if(v.level)
      j["level"] = *v.level;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeRequest_t& v) {
    if(auto it = j.find("text"); it != j.end() && !it->is_null())
      v.text = it->get<std::string_t>();
    if(auto it = j.find("texts"); it != j.end() && !it->is_null())
      v.texts = it->get<std::vector<std::string>>();
    if(auto it = j.find("aggressiveScan"); it != j.end() && !it->is_null())
      v.aggressiveScan = it->get<bool_t>();
    if(auto it = j.find("removeDisallowedChars"); it != j.end() && !it->is_null())
      v.removeDisallowedChars = it->get<bool_t>();
    if(auto it = j.find("level"); it != j.end() && !it->is_null())
      v.level = it->get<uint32_t_t>();
  }
  inline std::string to_string(const SanitizerSanitizeRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
