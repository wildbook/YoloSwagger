#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizeResponse_t {
    bool modified;
    std::optional<std::string> text;
    std::optional<std::vector<std::string>> texts;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeResponse_t& v) {
    j["modified"] = v.modified;
    if(v.text)
      j["text"] = *v.text;
    if(v.texts)
      j["texts"] = *v.texts;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeResponse_t& v) {
    v.modified = j.at("modified").get<bool>();
    if(auto it = j.find("text"); it != j.end() !it->is_null())
      v.text = it->get<std::string>();
    if(auto it = j.find("texts"); it != j.end() !it->is_null())
      v.texts = it->get<std::vector<std::string>>();
  }
}
