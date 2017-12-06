#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueTranslation_t {
    std::string shortName;
    std::string name;
    std::string description;
    std::string detailedDescription;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueTranslation_t& v) {
    j["shortName"] = v.shortName;
    j["name"] = v.name;
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueTranslation_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
  }
}
