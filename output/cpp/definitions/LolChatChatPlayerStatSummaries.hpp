#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlayerStatSummary.hpp"
namespace leagueapi {
  struct LolChatChatPlayerStatSummaries_t {
    std::vector<LolChatChatPlayerStatSummary_t> playerStatSummarySet;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlayerStatSummaries_t& v) {
    j["playerStatSummarySet"] = v.playerStatSummarySet;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlayerStatSummaries_t& v) {
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<LolChatChatPlayerStatSummary_t>>();
  }
  inline std::string to_string(const LolChatChatPlayerStatSummaries_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
