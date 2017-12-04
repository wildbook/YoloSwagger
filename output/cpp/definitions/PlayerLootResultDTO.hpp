#ifndef SWAGGER_TYPES_PlayerLootResultDTO_HPP
#define SWAGGER_TYPES_PlayerLootResultDTO_HPP
#include <json.hpp>
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerLootResultDTO {
    // 
    std::string status;
    // 
    std::vector<PlayerLootDTO> removed;
    // 
    std::vector<PlayerLootDTO> added;
    // 
    std::string details;
    // 
    std::vector<std::string> redeemed;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootResultDTO& v) {
    j["status"] = v.status;
    j["removed"] = v.removed;
    j["added"] = v.added;
    j["details"] = v.details;
    j["redeemed"] = v.redeemed;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootResultDTO& v) {
    v.status = j.at("status").get<std::string>;
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO>>;
    v.added = j.at("added").get<std::vector<PlayerLootDTO>>;
    v.details = j.at("details").get<std::string>;
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_PlayerLootResultDTO_HPP
