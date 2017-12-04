#ifndef SWAGGER_TYPES_LolLoadoutsInventoryResponseDTO_HPP
#define SWAGGER_TYPES_LolLoadoutsInventoryResponseDTO_HPP
#include <json.hpp>
#include "LolLoadoutsInventoryDTO.hpp"
namespace leagueapi {
  // 
  struct LolLoadoutsInventoryResponseDTO {
    // 
    LolLoadoutsInventoryDTO data;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryResponseDTO& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryResponseDTO& v) {
    v.data = j.at("data").get<LolLoadoutsInventoryDTO>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsInventoryResponseDTO_HPP