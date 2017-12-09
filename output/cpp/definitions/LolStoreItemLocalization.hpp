#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemLocalization_t {
    std::string name;
    std::string language;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemLocalization_t& v) {
    j["name"] = v.name;
    j["language"] = v.language;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemLocalization_t& v) {
    v.name = j.at("name").get<std::string>();
    v.language = j.at("language").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const LolStoreItemLocalization_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
