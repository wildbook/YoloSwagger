#ifndef SWAGGER_TYPES_LolInventoryInventoryResponseDTO_HPP
#define SWAGGER_TYPES_LolInventoryInventoryResponseDTO_HPP
#include <json.hpp>
#include "LolInventoryInventoryDTO.hpp"
namespace leagueapi {
  // 
  struct LolInventoryInventoryResponseDTO {
    // 
    LolInventoryInventoryDTO data;
  };

  void to_json(nlohmann::json& j, const LolInventoryInventoryResponseDTO& v) {
    j["data"] = v.data;
  }

  void from_json(const nlohmann::json& j, LolInventoryInventoryResponseDTO& v) {
    v.data = j.at("data").get<LolInventoryInventoryDTO>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryInventoryResponseDTO_HPP
