#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  struct PlayerLootResultDTO_t {
    std::string status;
    std::vector<PlayerLootDTO_t> removed;
    std::string details;
    std::vector<std::string> redeemed;
    std::vector<PlayerLootDTO_t> added;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootResultDTO_t& v) {
    j["status"] = v.status;
    j["removed"] = v.removed;
    j["details"] = v.details;
    j["redeemed"] = v.redeemed;
    j["added"] = v.added;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootResultDTO_t& v) {
    v.status = j.at("status").get<std::string>();
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO_t>>();
    v.details = j.at("details").get<std::string>();
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>();
    v.added = j.at("added").get<std::vector<PlayerLootDTO_t>>();
  }
  inline std::string to_string(const PlayerLootResultDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
