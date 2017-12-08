#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RedeemLootTransactionDTO_t {
    std::string_t lootName;
  };

  inline void to_json(nlohmann::json& j, const RedeemLootTransactionDTO_t& v) {
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, RedeemLootTransactionDTO_t& v) {
    v.lootName = j.at("lootName").get<std::string_t>();
  }
  inline std::string to_string(const RedeemLootTransactionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
