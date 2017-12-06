#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksQueue_t {
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksQueue_t& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksQueue_t& v) {
    v.id = j.at("id").get<int32_t>();
  }
}
