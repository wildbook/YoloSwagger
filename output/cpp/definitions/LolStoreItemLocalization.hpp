#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemLocalization_t {
    std::string description;
    std::string language;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemLocalization_t& v) {
    j["description"] = v.description;
    j["language"] = v.language;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemLocalization_t& v) {
    v.description = j.at("description").get<std::string>();
    v.language = j.at("language").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
}
