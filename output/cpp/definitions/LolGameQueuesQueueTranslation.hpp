#ifndef SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameQueuesQueueTranslation {
    // 
    std::string shortName;
    // 
    std::string description;
    // 
    std::string name;
    // 
    std::string detailedDescription;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueTranslation& v) {
    j["shortName"] = v.shortName;
    j["description"] = v.description;
    j["name"] = v.name;
    j["detailedDescription"] = v.detailedDescription;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueTranslation& v) {
    v.shortName = j.at("shortName").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
