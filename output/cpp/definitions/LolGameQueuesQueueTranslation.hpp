#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueTranslation_t {
    std::string shortName;
    std::string description;
    std::string name;
    std::string detailedDescription;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueTranslation_t& v) {
    j["shortName"] = v.shortName;
    j["description"] = v.description;
    j["name"] = v.name;
    j["detailedDescription"] = v.detailedDescription;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueTranslation_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
  }
  inline std::string to_string(const LolGameQueuesQueueTranslation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
