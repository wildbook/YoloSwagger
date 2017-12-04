#ifndef SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameQueuesQueueTranslation {
    // 
    std::string description;
    // 
    std::string detailedDescription;
    // 
    std::string name;
    // 
    std::string shortName;
  };

  void to_json(nlohmann::json& j, const LolGameQueuesQueueTranslation& v) {
    j["description"] = v.description;
    j["detailedDescription"] = v.detailedDescription;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
  }

  void from_json(const nlohmann::json& j, LolGameQueuesQueueTranslation& v) {
    v.description = j.at("description").get<std::string>;
    v.detailedDescription = j.at("detailedDescription").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.shortName = j.at("shortName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueTranslation_HPP
