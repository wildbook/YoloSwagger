#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueTranslation_t {
    std::string description;
    std::string detailedDescription;
    std::string name;
    std::string shortName;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueTranslation_t& v) {
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueTranslation_t& v) {
    v.description = j.at("description").get<std::string>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.shortName = j.at("shortName").get<std::string>();
  }
}
