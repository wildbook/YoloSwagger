#ifndef SWAGGER_TYPES_BannedChampion_HPP
#define SWAGGER_TYPES_BannedChampion_HPP
#include <json.hpp>
namespace test {
  // 
  struct BannedChampion {
'    // 
    int32_t championId;
    // 
    int32_t pickTurn;
    // 
    int32_t teamId;
  };

  void to_json(nlohmann::json& j, const BannedChampion& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, BannedChampion& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.pickTurn = j.at("pickTurn").get<int32_t>;
    v.teamId = j.at("teamId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_BannedChampion_HPP
