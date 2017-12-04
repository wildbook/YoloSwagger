#ifndef SWAGGER_TYPES_RosterDynamicStateDTO_HPP
#define SWAGGER_TYPES_RosterDynamicStateDTO_HPP
#include <json.hpp>
#include "TicketOfferDTO.hpp"
#include "RosterWithdraw.hpp"
#include "PhaseRosterSubDTO.hpp"
#include "BuybackMember.hpp"
namespace leagueapi {
  // 
  struct RosterDynamicStateDTO {
    // 
    std::vector<BuybackMember> members;
    // 
    std::vector<uint64_t> phaseCheckinStates;
    // 
    std::vector<PhaseRosterSubDTO> phaseRosterSubs;
    // 
    int64_t rosterId;
    // 
    std::vector<TicketOfferDTO> ticketOffers;
    // 
    int64_t tournamentId;
    // 
    RosterWithdraw withdraw;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO& v) {
    j["members"] = v.members;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["rosterId"] = v.rosterId;
    j["ticketOffers"] = v.ticketOffers;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO& v) {
    v.members = j.at("members").get<std::vector<BuybackMember>>;
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>;
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO>>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
  }

}
#endif // SWAGGER_TYPES_RosterDynamicStateDTO_HPP
