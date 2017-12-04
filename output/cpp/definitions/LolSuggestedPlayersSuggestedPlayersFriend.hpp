#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersFriend_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersFriend_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersFriend {
    // 
    std::string availability;
    // 
    std::string name;
    // 
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) {
    j["availability"] = v.availability;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) {
    v.availability = j.at("availability").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersFriend_HPP
