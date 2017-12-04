#ifndef SWAGGER_TYPES_LolChatChatPlayerStatSummaries_HPP
#define SWAGGER_TYPES_LolChatChatPlayerStatSummaries_HPP
#include <json.hpp>
#include "LolChatChatPlayerStatSummary.hpp"
namespace test {
  // 
  struct LolChatChatPlayerStatSummaries {
'    // 
    std::vector<LolChatChatPlayerStatSummary> playerStatSummarySet;
  };

  void to_json(nlohmann::json& j, const LolChatChatPlayerStatSummaries& v) {
    j["playerStatSummarySet"] = v.playerStatSummarySet;
  }

  void from_json(const nlohmann::json& j, LolChatChatPlayerStatSummaries& v) {
    v.playerStatSummarySet = j.at("playerStatSummarySet").get<std::vector<LolChatChatPlayerStatSummary>>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatPlayerStatSummaries_HPP
