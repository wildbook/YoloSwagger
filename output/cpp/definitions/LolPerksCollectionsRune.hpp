#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksCollectionsRune_t {
    uint32_t runeId;
    uint32_t runeSlotId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRune_t& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRune_t& v) {
    v.runeId = j.at("runeId").get<uint32_t>();
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>();
  }
}
