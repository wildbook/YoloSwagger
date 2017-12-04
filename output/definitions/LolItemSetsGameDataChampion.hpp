#ifndef SWAGGER_TYPES_LolItemSetsGameDataChampion_HPP
#define SWAGGER_TYPES_LolItemSetsGameDataChampion_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolItemSetsGameDataChampion {
    // 
    std::string alias;
  };

  void to_json(nlohmann::json& j, const LolItemSetsGameDataChampion& v) {
    j["alias"] = v.alias;
  }

  void from_json(const nlohmann::json& j, LolItemSetsGameDataChampion& v) {
    v.alias = j.at("alias").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsGameDataChampion_HPP
