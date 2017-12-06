#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  struct PlayerLootResultDTO_t {
    std::vector<PlayerLootDTO_t> added;
    std::string details;
    std::vector<std::string> redeemed;
    std::vector<PlayerLootDTO_t> removed;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootResultDTO_t& v) {
    j["added"] = v.added;
    j["details"] = v.details;
    j["redeemed"] = v.redeemed;
    j["removed"] = v.removed;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootResultDTO_t& v) {
    v.added = j.at("added").get<std::vector<PlayerLootDTO_t>>();
    v.details = j.at("details").get<std::string>();
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>();
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO_t>>();
    v.status = j.at("status").get<std::string>();
  }
}
