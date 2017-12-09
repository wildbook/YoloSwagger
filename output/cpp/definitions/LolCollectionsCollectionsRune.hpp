#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRune_t {
    uint32_t runeSlotId;
    uint32_t runeId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRune_t& v) {
    j["runeSlotId"] = v.runeSlotId;
    j["runeId"] = v.runeId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRune_t& v) {
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>();
    v.runeId = j.at("runeId").get<uint32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRune_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
