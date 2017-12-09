#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerLootDTO.hpp"
namespace leagueapi {
  struct PlayerLootResultDTO_t {
    std::vector<PlayerLootDTO_t> removed;
    std::string details;
    std::vector<PlayerLootDTO_t> added;
    std::string status;
    std::vector<std::string> redeemed;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootResultDTO_t& v) {
    j["removed"] = v.removed;
    j["details"] = v.details;
    j["added"] = v.added;
    j["status"] = v.status;
    j["redeemed"] = v.redeemed;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootResultDTO_t& v) {
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO_t>>();
    v.details = j.at("details").get<std::string>();
    v.added = j.at("added").get<std::vector<PlayerLootDTO_t>>();
    v.status = j.at("status").get<std::string>();
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>();
  }
  inline std::string to_string(const PlayerLootResultDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
