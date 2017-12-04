#ifndef SWAGGER_TYPES_RosterDynamicStateDTO_HPP
#define SWAGGER_TYPES_RosterDynamicStateDTO_HPP
#include <json.hpp>
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "RosterWithdraw.hpp"
#include "BuybackMember.hpp"
namespace leagueapi {
  // 
  struct RosterDynamicStateDTO {
    // 
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    // 
    std::vector<BuybackMember> members;
    // 
    RosterWithdraw withdraw;
    // 
    int64_t rosterId;
    // 
    int64_t tournamentId;
    // 
    std::vector<TicketOfferDTO> ticketOffers;
    // 
    std::vector<uint64_t> phaseCheckinStates;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO& v) {
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["members"] = v.members;
    j["withdraw"] = v.withdraw;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["ticketOffers"] = v.ticketOffers;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO& v) {
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>;
    v.members = j.at("members").get<std::vector<BuybackMember>>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>;
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_RosterDynamicStateDTO_HPP
