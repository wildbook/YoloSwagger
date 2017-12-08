#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsInventoryDTO.hpp"
namespace leagueapi {
  struct LolLoadoutsInventoryResponseDTO_t {
    LolLoadoutsInventoryDTO_t data;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsInventoryResponseDTO_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsInventoryResponseDTO_t& v) {
    v.data = j.at("data").get<LolLoadoutsInventoryDTO_t>();
  }
  inline std::string to_string(const LolLoadoutsInventoryResponseDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
