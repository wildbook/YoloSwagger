#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryInventoryDTO.hpp"
namespace leagueapi {
  struct LolInventoryInventoryResponseDTO_t {
    LolInventoryInventoryDTO_t data;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryResponseDTO_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryResponseDTO_t& v) {
    v.data = j.at("data").get<LolInventoryInventoryDTO_t>();
  }
  inline std::string to_string(const LolInventoryInventoryResponseDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
