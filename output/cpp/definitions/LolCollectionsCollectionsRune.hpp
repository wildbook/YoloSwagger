#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRune_t {
    uint32_t_t runeId;
    uint32_t_t runeSlotId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRune_t& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRune_t& v) {
    v.runeId = j.at("runeId").get<uint32_t_t>();
    v.runeSlotId = j.at("runeSlotId").get<uint32_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRune_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
